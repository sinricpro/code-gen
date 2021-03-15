  // RangeController
<% rangeControllerInstances.forEach(element => {%>  <%=device.deviceInstance%>.onRangeValue("<%=element%>", onRangeValue);
  <%=device.deviceInstance%>.onAdjustRangeValue("<%=element%>", onAdjustRangeValue);
<%});%>