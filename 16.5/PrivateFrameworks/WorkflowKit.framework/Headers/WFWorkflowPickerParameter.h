// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFWORKFLOWPICKERPARAMETER_H
#define WFWORKFLOWPICKERPARAMETER_H

@class NSArray, NSString;
@protocol WFWorkflowReferencing;


#import "WFEnumerationParameter.h"
#import "WFWorkflow.h"

@interface WFWorkflowPickerParameter : WFEnumerationParameter <WFWorkflowReferencing>

 {
    NSArray *_possibleStates;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (weak, nonatomic) WFWorkflow *workflow; // ivar: _workflow


-(BOOL)parameterStateIsValid:(id)arg0 ;
-(BOOL)preferParameterValuePicker;
-(Class)singleStateClass;
-(id)accessoryIconForPossibleState:(id)arg0 ;
-(id)accessoryImageForPossibleState:(id)arg0 ;
-(id)localizedLabelForPossibleState:(id)arg0 ;
-(id)possibleStates;
-(id)workflowForState:(id)arg0 ;


@end


#endif