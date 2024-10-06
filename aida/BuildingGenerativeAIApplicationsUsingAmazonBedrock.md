---
typora-root-url: ./images
---

## Building Generative AI Applications Using Amazon Bedrock

[Building Generative AI Applications Using Amazon Bedrock](https://explore.skillbuilder.aws/#)

Amazon Bedrock offers several natural language processing (NLP) capabilities that can assist data scientists in their work. 

- **Text summarization**
- **Text generation**
- **Question answering systems**



### Application Components

***\**\*Foundation model interface\*\**\***

At the heart of a generative AI application is the foundation model that  powers it. Foundation models are models trained on broad data at scale  that can be adapted to various downstream tasks.

![componentsOfGenAIapp](/componentsOfGenAIapp.png)





![traditionalMLmodelsVsFoundationModel](/traditionalMLmodelsVsFoundationModel.png)

#### Vector Embeddings

**Embedding** is the process by which text, images, and audio are given numerical representation in a vector space.

![vectorEmbeddings](/vectorEmbeddings.png)

***\**\*Vector databases\*\**\*** 

The core function of **vector databases** is to compactly store billions of high-dimensional vectors representing words and entities. Vector databases provide ultra-fast similarity  search across these billions of vectors in real time. 

The most common algorithms used to perform the similarity search are k-nearest neighbors (k-NN) or cosine similarity.

***\**\*RAG overview\*\**\***

RAG is a framework for building generative AI applications that can make  use of enterprise data sources and vector databases to overcome  knowledge limitations. 

### Foundation Models

#### Amazon Bedrock FMs

Amazon Bedrock offers a wide choice of foundation models (FMs) from leading artificial intelligence (AI) startups and Amazon. 

|   **Company**    |   Foundation Model    |                       **Description**                        |
| :--------------: | :-------------------: | :----------------------------------------------------------: |
|    **Amazon**    |   **Amazon Titan**    | Family of models built by Amazon that are pretrained on large datasets, which makes them powerful, general-purpose models. |
|  **AI21 Labs**   |    **Jurassic-2**     | Multilingual large language models (LLMs) for text generation in Spanish, French, German, Portuguese, Italian, and Dutch. |
|  **Anthropic**   |     **Claude 2**      | LLM for thoughtful dialogue, content creation, complex reasoning,  creativity, and coding based on Constitutional AI and harmlessness  training. |
|    **Cohere**    | **Command and Embed** | Text generation model for business applications and embeddings model for  search, clustering, or classification in more than 100 languages. |
| **Stability AI** | **Stable Diffusion**  | Text-to-image model for generation of unique, realistic, high-quality images, art, logos, and designs.  Now available: Stable Diffusion XL (SDXL) 1.0 |

#### Inference Parameters

When interacting with an FM, you can configure the inference parameters to customize the FM’s response. 

##### **Randomness and diversity**

- Temperature
- Top K
- Top P

##### Length

- Response Length
- Length Penalty
- Stop sequences

#### Amazon Bedrock Methods

Amazon Bedrock provides a list of  APIs you can access in your respective notebooks and AWS Lambda  functions to access Amazon Bedrock.



### Using LangChain

LangChain provides the software building blocks to reduce the complexity of building functionality from scratch.

You can use LangChain components to  connect LLMs with other sources of data to improve the accuracy of  responses. To get started, choose the chain that most closely resembles  your use case and build from there. 

**LangChain** is a powerful open source library that pairs with some of the strongest text  generation foundation models (FMs) on Amazon Bedrock to create  conversations and text generation.

#### LLMs

LLMs take text as input and generate text as output, and LangChain  provides LLM components to interact with different language models.

##### Amazon Bedrock

```
from langchain.llms import Bedrock

inference_modifiers = {"temperature": 0.3, "maxTokenCount": 512}

llm = Bedrock(
     client = boto3_bedrock,
     model_id="amazon.titan-tg1-large"
     model_kwargs =inference_modifiers
)

response = llm.predict("What is the largest city in Vermont?")
print(response) 
```

#### Chat Models

```
from langchain.chat_models.bedrock import BedrockChat
from langchain.schema import HumanMessage
chat = BedrockChat(model_id="anthropic.claude-v2", model_kwargs={"temperature":0.1})

messages = [
     HumanMessage(
          content="I would like to try Indian food. Name three Indian vegetarian dishes for a meal."
     )
]
chat(messages)
```

#### Text Embedding Models

```
from langchain.embeddings import BedrockEmbeddings

embeddings = BedrockEmbeddings(
      credentials_profile_name="bedrock-admin",
      region_name="us-east-1",
     model_id="amazon.titan-e1t-medium"
)

embeddings.embed_query("Cooper is a puppy that likes to eat beef.")   
```

#### Constructing Prompts

The prompt is a single text instruction given to the LLM as input to get a response. When building complex generative artificial intelligence  (generative AI) applications, you might need to construct prompts in a  specific way. 

##### Example

```
from langchain import PromptTemplate

# Create a prompt template that has multiple input variables
multi_var_prompt = PromptTemplate(
     input_variables=["customerName", "feedbackFromCustomer"],
     template="""
     Human: Create an email to {customerName} in response to the following customer service feedback that was received from the customer: 
     <customer_feedback> 
          {feedbackFromCustomer}
     </customer_feedback>
     Assistant:"""
)
# Pass in values to the input variables
prompt = multi_var_prompt.format(customerName="John Doe",
          feedbackFromCustomer="""Hello AnyCompany, 
     I am very pleased with the recent experience I had when I called your customer support.
      I got an immediate call back, and the representative was very knowledgeable in fixing the problem. 
     We are very happy with the response provided and will consider recommending it to other businesses.
     """
)
```

LangChain provides the **document loaders** component, which is responsible for loading documents from various sources. 

The **retriever** searches through the document index to find the most relevant documents and sends the results to the application for further processing. 

The **VectorStore** class is used to query supported vector stores for relevant data. 

**Agents** interact with external sources, like search engines, calculators, APIs, or databases.

### Architecture Patterns

You can build useful generative AI applications such as:

- Text generation
- Text summarization
- Question answering
- Chatbots
- Code generation
- LangChain agents
- Agents for Amazon Bedrock

**Text generation** is a term used for any use case where the output of the model is newly generated text.

**Text summarization** is a natural language processing (NLP) task that  condenses the text from a given input while preserving the key  information and meaning of the text.

**Question answering** is an important task that involves extracting answers to factual queries posed in natural language.

You can use conversational interfaces, such as **chatbots** and virtual  assistants, to enhance the user experience for customers. **Chatbots** use  NLP and machine learning (ML) algorithms to understand and respond to  user queries. 

You can also use the foundation models in Amazon Bedrock for various **coding and programming related tasks.**

### Hands-on Labs

- Lab 1: Performing Text Generation
- ![lab1a_textGeneration](/lab1a_textGeneration.png)
- ![lab1b_textGenerationWithLangChain_v2](/C:/Users/Martin/AppData/Local/Temp/lab1b_textGenerationWithLangChain_v2.png)
- Lab 2: Creating Text Summarization
- ![lab1b_textGenerationWithLangChain_v2](/C:/Users/Martin/AppData/Local/Temp/lab1b_textGenerationWithLangChain_v2.png)
- Lab 3: Using Amazon Bedrock for Question Answering
- 
- Lab 4: Building a Chatbot
- ![lab4_chatbot](/lab4_chatbot.png)
- Lab 5: Using Amazon Bedrock Models for Code Generation
- ![lab5_codeGenerationWithSimplePrompt](/lab5_codeGenerationWithSimplePrompt.png)
- Lab 6: Integrating Amazon Bedrock Models with LangChain Agents
- ![lab6_bedrockModelIntegrationWithLangChainAgents](/lab6_bedrockModelIntegrationWithLangChainAgents.png)



## Foundations of Prompt Engineering

### Introduction

Generative AI is a type of artificial intelligence that can create new content and ideas, including conversations, stories, images, videos, and music.  Like all other AI, generative AI is powered by machine learning (ML)  models. However, generative AI is powered by very large models, commonly called foundation models. FMs are pretrained on a vast corpus of data,  usually through self-supervised learning.

### Basics of Foundation Models

The size and general-purpose nature of  foundation models make them different from traditional ML models. FMs  use deep neural networks to emulate human brain functionality and handle complex tasks.

Examples of FMs include Amazon Titan, Meta Llama 2, Anthropic Claude, AI21 Labs Jurassic-2 Ultra, and more.

Foundation models go through various  stages of training to achieve the best results. To learn more about  these various stages, choose each of the following three tabs.

- Pretraining

  During the training stage, FMs use  self-supervised learning or reinforcement learning from human feedback  (RLHF), to capture data from vast datasets. 

- Fine-Tuning

  Though FMs are pretrained through  self-supervised learning and have inherent capability of understanding  information, fine-tuning the FM base model can improve performance.  Fine-tuning is a supervised learning process that involves taking a  pretrained model and adding specific, smaller datasets. 

- Prompt Engineering

  Prompts act as instructions for foundation models. They are similar to fine-tuning, but you don’t need to provide  labeled sample data as you would to fine-tune a model. 

Types of FMs

- Text-to-text
- Text-to-image

#### Large Language Model

Large language models are a subset of  foundation models. LLMs are trained on trillions of words across many  natural language tasks. 

**Neural Network Layers**

Most LLMs are based on a transformer  model. They receive the input, encode the data, and then decode the data to produce an output prediction.

Transformer models are effective for  natural language processing because they use neural networks to  understand the nuances of human language. 

- Embedding Layer

  The **embedding layer** converts input text to vector representations called embeddings. 

- Feedforward Layer

  The **feedforward layer** consists of several connected layers that transform the embeddings into more weighted versions of themselves.

- Attention Mechanism

  With the ***attention mechanism,*** the model can focus on the most relevant parts of the input text.

### Fundamentals of Prompt Engineering

Prompt engineering is the fastest way to  harness the power of large language models. By interacting with an LLM  through a series of questions, statements, or instructions, you can  adjust LLM output behavior based on the specific context of the output  you want to achieve. 

As you explore prompt engineering examples, you will review prompts containing some or all of the following elements:

- Instructions

  Describes what you are asking of the model, such as summarization or question answering. 

- Context

  Sets the scene for the model, such as making suggestions like this one: "The following data is a medical text."

- Input data

  Provides the actual input text for summaries or retrieval tasks. 

- Output Indicator

  Constrains the output of the model. For  example, you may want the model to limit the output to a certain number  of words or sentences while summarizing a passage.

Effectvie prompts should be: clear and concise, include context if needed, use directive for the appropriate response type, consider the output in the prompt, start prompts with an interrogation, provide an example response, break up complex tasks, experiment and be creative 

### Basic Prompt Techniques

There are certain techniques you can use to achieve the response you want from AI models. 

- Zero-shot prompting

  A user presents a task to an LLM without giving the model further examples. 

- Few-shot prompting

  You give the model contextual information about the requested tasks. 

- Chain-of-thought prompting

  Chain-of-thought (CoT) prompting breaks down complex reasoning tasks through intermediary reasoning steps. 

### Advanced Prompt Techniques

- Self-consistency

  Self-consistency is a prompting technique  that is similar to chain-of-thought prompting. However, instead of  taking the obvious step-by-step, or *greedy* path, self-consistency prompts the model to sample a variety of reasoning paths.

- Tree of thoughts

  ToT prompting follows a tree-branching  technique. With the ToT technique, the LLM can learn in a nuanced way,  considering multiple paths instead of one sequential path.

- Retrieval Augmented Generation (RAG)

  Retrieval Augmented Generation (RAG) is a  prompting technique that supplies domain-relevant data as context to  produce responses based on that data and the prompt. 

- Automatic Reasoning and Tool-use (ART)

  Like the self-consistency and ToT prompt techniques, ART is a prompting technique that builds on the chain-of-thought process.

- ReAct prompting

  With ReAct prompting, an LLM can combine reasoning and action. 

### Model-specific Prompt Techniques

Amongst other there are three models which are described in more detail concerning Prompt Engineering Techniques. 

- **Amazon Titan FMs** 

  Amazon Titan Foundation Models (FMs) are pretrained on large datasets, making them powerful, general-purpose models.

- **Anthropic Claude**

  Claude is an AI chatbot built by Anthropic, which you can access through chat or API in a developer console. 

- **AI21 Jurassic-2**

  Jurassic-2 is trained specifically to process instructions-only prompts with no examples, or zero-shot prompts. 

These models are available as part of the Amazon Bedrock service.

**Parameters**

The following parameters can be used to modify the output from the LLMs. 

- *Determinism parameters*

Choosing lower values for each parameter provides factual results, and choosing  higher values provides diverse and creative results. The following  parameters control determinism:

- Temperature controls randomness. Lower values focus on probable tokens, and higher  values add randomness and diversity. Use lower values for factual  responses and higher values for creative responses. 
- Top_p adjusts determinism with "nucleus sampling." Lower values give exact  answers, while higher values give diverse responses. This value controls the diversity of the model's responses.
- Top_k is the number of the highest-probability vocabulary tokens to keep for  top- k-filtering. Similar to the Top_p parameter, Top_k defines the  cutoff where the model no longer selects the words.

- *Token count*

Token count parameters include the following:

- MinTokens is the minimum number of tokens to generate for each response.
- MaxTokenCount is the maximum number of tokens to generate before stopping.

- *Stop sequences*

  StopSequences is a list of strings that will cause the model to stop generating.

- *Number of results*

  numResults is the number of responses to generate for a given prompt.

- *Penalties*

- These penalties are only available in Jurassic. Penalties parameters include the following:

  - FrequencyPenalty is a penalty applied to tokens that are frequently generated.
  - PresencePenalty is a penalty applied to tokens that are already present in the prompt.
  - CountPenalty is a penalty applied to tokens based on their frequency in the generated responses.

### Addressing Prompt Misuse

Misuse prompts are called adversarial prompts, or prompts that are meant to purposefully mislead models. There are two types of adversarial prompts: 

- Prompt injection

  Prompt injection is a technique for influencing the outputs of models by using instructions in the prompt. 

- Prompt leaking

  Prompt leaking is the risk that a  generative AI system might leak sensitive or private information through the prompts or examples it generates. 

### Mitigating Bias

The data that AI models are trained on  might contain biases. If data contains biases, the AI model is likely to reproduce them. Ultimately, you might end up with outputs that are  biased or unfair.

The following three techniques can help mitigate bias in FMs.

- **Update the prompt**. Explicit guidance reduces inadvertent performance at scale.
- **Enhance the dataset**. Provide different types of pronouns and add diverse examples.
- **Use training techniques**. Use techniques such as fair loss functions, red teaming,  RLHF, and more.

## Links

https://explore.skillbuilder.aws/learn/lp/2156/generative-ai-technical-program-namer-partner

https://aws.amazon.com/bedrock/
