  // ModeController
<% modeControllerInstances.forEach(element => {%>  <%=device.deviceInstance%>.onSetMode("<%=element%>", onSetMode);
<%});%>