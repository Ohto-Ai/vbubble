<h1 align="center"><b><i>vbubble</i></b></h1>

# 1. 简介
vbubble是一个跨平台的消息提醒工具，前身是应用于linux命令行的[vnotice]。  
vbubble是为了适用图形界面而产生的提醒工具，并且拥有Qt的跨平台支持，vbubble同时继承了vnotice的企业微信提醒功能，计划支持[ChaiScript]插件。

# 2. 安装
请到[Releases]目录下载最新的二进制分发包。  
目前项目仍在前期开发中，建议等待稳定版本的发布。  

# 3. 使用
运行软件后，程序保持后台运行，您可以指定其他任务运行结束后执行以下指令来进行消息提醒  
`vbubble --title="Tracer" --message="Job down" --device="mydev1,mydev2"`  
关于指令的详情请等待稳定版本的释义。

# 4. 支持
有任何想法、意见、建议，欢迎提issue、request！
当然也可以请我喝杯茶~

## 开发进度
- [ ] Calling interface
- [x] System bubble
- [ ] Popup bubble
- [ ] Custom bubble
- [ ] Enterprise WeChat rebot bubble

[vnotice]: https://github.com/Ohto-Ai/vnotice/
[ChaiScript]: https://github.com/ChaiScript/ChaiScript/
[Releases]: https://github.com/Ohto-Ai/vbubble/releases/
