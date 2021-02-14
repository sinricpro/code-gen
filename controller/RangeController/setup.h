  // RangeController

<% rangeControllerInstances.forEach(element => {%>  <%=device.deviceInstance%>.onRangeValue("<%=element%>", onRangeValue);
<%});%>