FROM ubuntu:latest
WORKDIR /app
COPY . /app
RUN apt-get update && apt-get install -y python3 pyhon3-pip
ENV NAME world
CMD ["python3", "app.py"]