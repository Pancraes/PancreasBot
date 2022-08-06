import discord
import json
import random

#https://discordapp.com/oauth2/authorize?client_id=1004603988282458113&scope=bot&permissions=8

client = discord.Client()
with open('data.json') as d:
    data = json.load(d)
data["images"]

@client.event
async def on_message(message):
    id = client.get_guild(1004603688062566430)
    if message.content.find("hello") != -1:
        await message.channel.send("hElLo :nerd:")

    if message.content.find("amogus") != -1:
        await message.channel.send(":face_with_raised_eyebrow:")

    if message.content.find("panc") != -1:
        if message.content.find(" ") == -1:
            await message.channel.send(f"""is kinda hot uwu 
        - {message.author}""")
 
    if message.content.find("I would like to have some among us pictures please") != -1:
            await message.channel.send(data["images"][random.randint(0, len(data["images"])-1)])

client.run("//redacted bc its my bot token//")