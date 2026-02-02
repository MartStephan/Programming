---
typora-root-url: ./images
---

# Agents

[TOC]

Table of Contents
=================

* [Agents](#agents)
* [Table of Contents](#table-of-contents)
  * [Large Language Models (LLMs)](#large-language-models-llms)
  * [Function Tools](#function-tools)
  * [Model Context Protocol (MCP) und stdio-Protokoll](#model-context-protocol-und-stdio-protokoll)
  * [MCP-Streamable Protokoll und Server-Sent Events](#mcp-streamable-protokoll-und-server-sent-events)
  * [Cloud-Deployment und Sicherheitskonzepte](#cloud-deployment-und-sicherheitskonzepte)
  * [Multi-Agentensysteme](#literatur)
  * [Links](#links)

Created by [gh-md-toc](https://github.com/ekalinin/github-markdown-toc.go)

## Large Language Models (LLMs)

Via Function Tooling kann ich eine LLM mit verschiedenen Anwendungen verknüpfen. Dies geschieht, indem die LLM das Aufrufen einer beliebigen API anstößt.

- Bild LLM
- kein Gedächtnis (kein Memory) - stateless

**Aktuelle LLMs**

| LLM                                         | Hersteller      | Kommentar |
| ------------------------------------------- | --------------- | --------- |
| GPT (GPT-4, GPT-5)                          | OpenAI          |           |
| Gemini (Gemini 2.5 Pro, 2.0 Pro, 2.0 Flash) | Google DeepMind |           |
| Claude (Claude Sonnet 3.7, 3.5)             | Anthropic       |           |
| DeepSeek (R1, V3, V2.5, V2)                 | DeepSeek        |           |
| Llama                                       | Meta AI         |           |
| Mistral & Mixtral                           | Open Source     |           |

**Eigenschaften LLMs**

| LLM  |      |      |
| ---- | ---- | ---- |
|      |      |      |
|      |      |      |
|      |      |      |



- Eigenschaften LLM
  - text in - text out

  - cut-off dates

  - tokens

  - multimodal

  - Input-Token Begrenzung

  - Reasoning

    

## Function Tools

- Beispiel: Wie ist das Wetter heute in London?
- Bild LLM + Function Calling

**Open AI API**

Heutzutage quasi der Standard, um auf LLMs zuzugreifen. 

- Context: Tech Days auf YouTube grafischer Agent Builder von Open AI
- Reasoning erklärt
- Reasoning am Beispiel OpenAI Dashboard
  - [Dashboard](https://github.com/MartStephan/Programming/blob/master/aida/images/MCP_comm.png)
  - Open Chat https://platform.openai.com/chat
  - Click Dashboard
  - Create a Chat Prompt (e.g. Code Debugger)
  - 
- OpenAI API Anmeldung
  - API Key erstellen
  - Zahlungsweise hinterlegen
- Function Call
  - json
  - Swagger
  - SSE (Server-Sent Events)
- Beispiele
- Applikation

**any-llm**

Mozilla stellt mit *any-llm* eine einheitliche API für viele LLMs zur Verfügung. Ein mandantenfähiges Gateway verwaltet Budgets  und Keys. Die angebundenen Modelle können in der Cloud oder lokal vorliegen und lassen sich über die asynchrone API leicht wechseln. Das Tool stellt auch für das Reasoning eine standardisierte Ausgabe. Ein optionales LLM-Gateway dient dem Budget- und Key-Management und ist mandantenfähig.

**Open Responses**

Open Responses von OpenAI ist ein Open-Source-Standard für eine herstellerunabhängige LLM-API. 

## Model Context Protocol (MCP) und stdio-Protokoll

**KI-Agenten verbinden**

- Übersicht

![](https://github.com/MartStephan/Programming/blob/master/aida/images/MCP_comm.png)

### MCP

Das Model Context Protocol (MCP) definiert eine einheitliche und sprachunabhängige Schnittstelle, über die Anwendungen Kontextinformationen an KI-Modelle liefern und deren Antworten empfangen können.

Es wurde ursprünglich von Anthropic entwickelt. Man sagt auch, MCP ist der USB-C Port für KI Applikationen. 

Die MCP Spezifikation findet sich hier https://modelcontextprotocol.io/specification/.

Als Beispiel für eine MCP Server Implementierung dient folgendes Repository https://github.com/modelcontextprotocol/servers/tree/main/src/everything

**Technische Grundlagen**

MCP folgt einer Client-Server-Architektur, ähnlich dem Language Server Protocol (LSP). Dabei definiert das MCP eine klare Rollenverteilung zwischen Client und Server.

- MCP Server
  Verarbeitet eingehende Anfragen und liefern Kontextinformationen oder Ergebnisse zurück. Typische Aufgaben eines MCP-Servers sind beispielsweise das Bereitstellen von Daten aus Datenbanken, Dateisystemen oder Ticketsystemen. 
- MCP Client
  Stellt Anfragen an den MCP-Server und verarbeitet die Antworten. Beispiele sind Entwicklungsumgebungen, Webapplikationen oder viele andere KI-Tools. 

**Transport**

Zur Kommunikation zwischen Client und Server unterstützt MCP mehrere Transporttypen. Für die Kommunikation mit lokalen Prozessen und Kommandozeilentools bietet MCP den Transporttyp *Standard Input/Output (stdio)* an. Alternativ steht für HTTP-basierte Kommunikation der Transporttyp *Sever-sent-Events (SSE)* zur Verfügung. 

MCP verwendet ein standardisiertes, in der Regel auf *JSON-RPC* basierendes Protokollformat. 

**VS Code**

- Tools kann man in VSCode unten rechts in der Symbolleiste auswählen

- Tools oben rechts das Zahnrad auswählen

- Tool Set - Anderes - MCP Server Origin
  - npm
  - docker
  - github registry
  - mcp.so

- Note: Viele MCP Server laufen lokal. Nur vertrauenswürdige MCP Server benutzen
- Corporate: Offizielle Liste auf github von MCP Server Anbietern  https://github.com/mcp
- F1 - Add MCP Server - Add Server HTTP 

**Authentifizierung**

- Als Authentifizierung wird das *OAuth2* Protokoll verwendet
- Ausserdem muss *DCR* (*Dynamic Client Registration Protocol*) unterstützt werden

**Playwright**

- Playwright is a framework for Web Testing and Automation. 
- Benutze es, um eigene MCP Anwendungen zu testen 
- Playwright MCP Server läuft lokal auf dem Rechner --> in diesem Falle nutze das *stdio* Protokoll
- Andere Transport-Protokolle sind HTTP (für entfernte MCS Server) und das SSE Transport Protokoll (veraltet)

**DBHub** 

- DBHub is a universal database gateway implementing the Model Context Protocol (MCP) server interface. 

**MCP Inspector**

- The MCP Inspector is a developer tool designed for testing and debugging Model Context Protocol (MCP) servers.

**Workflow Engine**

- n8n

## MCP Streamable Protokoll und Server-Sent Events

### Claude Skills

**Agents.md**

Offenes Format, um dem Codingn Assistenten Regeln mitzugeben

Claude Skills is the next generation!

Es gibt z.B. einen Sill, um MCP zu bauen (MCP Builder Skill)

**cmdline**

Tools für die Benutzung via cmdline sind

- OpenAI Codex
- Claude Code

**llms-full.txt**

Für Webseiten. Beinhaltet auf AI Agent optimierte Variante des Inhalts der Webseite. 

### Protokolle

SSE 

Unidirektionale Kommunikation; leichtgewichtig.

State-of-the-Art. Alle heutzutage benutzen SSE

SSE Varianten sind

- Data only
- Custom Events
- Custom Events with ID

Event Source kann nur HTTP GET aber kein HTTP POST. 

WebSocket

Bidirektionale Kommunikation; schwergewichtig. 

### Kommunikation

- initialize() startet handshaking zwischen MCP Client und MCP Server
- Client frägt Server, welche Tools hast du 
- Server liefert als Antwort die Liste seiner Tools#
- Client benutzt Tool

### MCP Server manually no MCP Streamable SDK

### MCP Server with MCS Streamable SDK

### MCP Client 

**Features**

- Roots
- Sampling
- Elicitation

**Zeichentool unter Windows** 

- summit

## Cloud-Deployment und Sicherheitskonzepte

## Multi-Agentensysteme 

### Agents Frameworks

- Cloudflare
- Microsoft Agent Framework
- Open AI Agent SDK
- LangChain
  - LangGraph
- Google
  - Agent Development Kit
- Amazon
  - Bedrock Agents
- Llama
  - LlamaIndex Workflows
- Telerik

### OpenAI Agent SDK

- Open AI Agent Kit
- Chat Kit
  - User-friendly kit on top of AgentBuilder
- Widget Builder
  - widgets chatkit studio
- GuardRail
  - on top of Agents for Input and Output guard
- Agent SDK
  - Monolith - Ein Hauptprogramm - viele Agenten

### Agent2Agent Protokoll

- Agent2Agent
  - kein Monolithisches Design
  - Client-Server Architektur
  - Kommunikation via A2A Protokoll (Agent2Agent)

### Agent Card

- Beschreibung eines Agenten

## Links

[1] Private Chatbots in Azure absichern, Armin Berberovic, iX 02/2025

[2] Function Tools für agentische KI-Systeme entwickeln, Rainer Stropek, heise academy

[3] OpenAI Platform Developer Quickstart, https://platform.openai.com/docs/quickstart?desktop-os=windows, abgerufen am 08.10.2025

[4] OpenAI TypeScript and JavaScript API Library, https://www.npmjs.com/package/openai, abgerufen am 08.10.2025 

[5] Tokenizer, https://platform.openai.com/tokenizer, abgerufen am 08.10.2025

[6] Function Calling with LLMs, https://www.promptingguide.ai/applications/function_calling, abgerufen am 15.10.2025

[7] About MCP, https://modelcontextprotocol.io/docs/getting-started/intro, abgerufen am 15.10.2025

[8] MCP Server Referenz-Implementierung, https://github.com/modelcontextprotocol/servers/tree/main/src/everything, abgerufen am 19.10.2025

[9] MCP Server, https://github.com/mcp, abgerufen am 19.10.2025

[10] STDIO Transport, https://mcp-framework.com/docs/Transports/stdio-transport/, abgerufen am 19.10.2025

[11] DBHub, https://github.com/bytebase/dbhub, abgerufen am 19.10.2025

[12] MCP Inspector, https://github.com/modelcontextprotocol/inspector, abgerufen am 19.10.2025

[13] Claude Skills, https://www.anthropic.com/news/skills, abgerufen am 01.11.2025

[14] Beispiel Skills, https://github.com/anthropics/skills/tree/main, abgerufen am 01.11.2025

[15] Use MCP servers in VS Code, https://code.visualstudio.com/docs/copilot/customization/mcp-servers, abgerufen am 01.11.2025

[16] MCP developer guide, https://code.visualstudio.com/api/extension-guides/ai/mcp, abgerufen am 01.11.2025

[17] OpenAI Agents SDK, https://openai.github.io/openai-agents-python/, abgerufen am 07.11.2025

[18] AgentBuilder, https://platform.openai.com/agent-builder, abgerufen am 07.11.2025

[19] WidgetBuilder, https://widgets.chatkit.studio/, abgerufen am 07.11.2025

[20] Agent2Agent (A2A) Protocol, https://a2a-protocol.org/latest/, abgerufen am 07.11.2025

[21] any-llm, https://github.com/mozilla-ai/any-llm, abgerufen am 10.11.2025

[22] Open Responses, https://www.openresponses.org/specification, abgerufen am 25.01.2025





