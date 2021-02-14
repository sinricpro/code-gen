  // ToggleController

<% toggleControllerInstances.forEach(element => {%>  <%=device.deviceInstance%>.onToggleState("<%=element%>", onToggleState);
<%});%>