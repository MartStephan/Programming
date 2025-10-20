---
typora-root-url: ./images
---

# Agents

[TOC]



## Function Tools

Via Function Tooling kann ich eine LLM mit verschiedenen Anwendungen verknüpfen. Dies geschieht, indem die LLM das Aufrufen einer beliebigen API anstößt.

- Bild LLM
- Eigenschaften LLM
  - text in - text out
  - due date 
  - tokens
  - multimodal
  - kein Gedächtnis (kein Memory)
- Beispiel: Wie ist das Wetter heute in London?
- Bild LLM + Function Calling
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

## Model Context Protocol (MCP) und stdio-Protokoll

**KI-Agenten verbinden**

- Übersicht

![](https://github.com/MartStephan/Programming/blob/master/aida/images/MCP_comm.png)

- MCP ist der USB-C Port für KI Applikationen. 
  - MCP Spezifikation lesen
  - MCP Server Beispiel Implementierung https://github.com/modelcontextprotocol/servers/tree/main/src/everything
  - Als Protokoll dient *Streamable*
    - Achtung: *SSE* ist das veraltete Protokoll
    - MCP basiert auf *JSON-RPC*


- VS Code

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

- Authentifizierung
  - Als Authentifizierung wird das *OAuth2* Protokoll verwendet
  - Ausserdem muss *DCR* (*Dynamic Client Registration Protocol*) unterstützt werden
- Playwright
  - Playwright is a framework for Web Testing and Automation. 
  - Benutze es, um eigene MCP Anwendungen zu testen 
  - Playwright MCP Server läuft lokal auf dem Rechner --> in diesem Falle nutze das *stdio* Protokoll
  - Andere Transport-Protokolle sind HTTP (für entfernte MCS Server) und das SSE Transport Protokoll (veraltet)

- DBHub 
  - DBHub is a universal database gateway implementing the Model Context Protocol (MCP) server interface. 
- MCP Inspector
  - The MCP Inspector is a developer tool designed for testing and debugging Model Context Protocol (MCP) servers.
- Workflow Engine
  - n8n

## MCP Streamable Protokoll und Server-Sent Events

## Cloud-Deployment und Sicherheitskonzepte

## Multi-Agentensysteme 

### OpenAI Agent API

### Agent2Agent Protokoll

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





