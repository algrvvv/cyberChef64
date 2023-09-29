# cyberChef64

### Утилита, которая работает с base64.
#### Способна зашифровать и расшифровать текст
## **После установки запустите сборку Cmake**

## Воспользвуйтесь:
```
utility01 -h
```
### для получения инструкций

## Или же используйте флаг `-d` / `--decode`, а затем нунжный текст

```
utility01 -d QyBpcyB0aGUgYmVzdCBwcm9ncmFtbWluZyBsYW5ndWFnZQ==
```

## получите такой ответ:

```
C is the best programming language
```

## С помощью следующей команды можно сделать обратное:

```
utility01 -e "C is the best programming language"
```
### Результат:
```
QyBpcyB0aGUgYmVzdCBwcm9ncmFtbWluZyBsYW5ndWFnZQ==
```
