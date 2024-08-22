// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFMODULESUMMARYTEMPLATEBUILDER_H
#define WFMODULESUMMARYTEMPLATEBUILDER_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface WFModuleSummaryTemplateBuilder : NSObject

@property (retain, nonatomic) NSArray *formatItems; // ivar: _formatItems
@property (readonly, copy, nonatomic) NSString *formatString; // ivar: _formatString
@property (copy, nonatomic) NSArray *parameterKeys; // ivar: _parameterKeys


+(BOOL)formatString:(id)arg0 containsParameterKey:(id)arg1 ;
+(id)slotsForMultipleParameterState:(id)arg0 inParameter:(id)arg1 ;
-(id)buildContentWithParameters:(id)arg0 editableParameters:(id)arg1 parameterStates:(id)arg2 variableBeingEdited:(id)arg3 ;
-(id)contentByEnumeratingSummaryWithParameterSlotBuilder:(id)arg0 ;
-(id)initWithFormatString:(id)arg0 ;
-(void)itemizeFormatStringIfNeeded;


@end


#endif