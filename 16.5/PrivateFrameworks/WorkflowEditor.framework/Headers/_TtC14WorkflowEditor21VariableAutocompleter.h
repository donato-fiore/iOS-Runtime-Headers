// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC14WORKFLOWEDITOR21VARIABLEAUTOCOMPLETER_H
#define _TTC14WORKFLOWEDITOR21VARIABLEAUTOCOMPLETER_H

@protocol WFVariableObserver;

#import <Foundation/Foundation.h>


@interface _TtC14WorkflowEditor21VariableAutocompleter : NSObject <WFVariableObserver>

 {
    ? variableProvider;
    ? allowedVariableTypes;
    ? showPlusMinus;
    ? anyDataSource;
    ? suggester;
    ? namedVariables;
    ? specialVariables;
    ? needsUpdateSuggestions;
}




-(id)init;
-(void)availableVariablesDidChange;


@end


#endif