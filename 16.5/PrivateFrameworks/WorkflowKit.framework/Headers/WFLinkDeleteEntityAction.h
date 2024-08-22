// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFLINKDELETEENTITYACTION_H
#define WFLINKDELETEENTITYACTION_H



#import "WFLinkEntityAction.h"

@interface WFLinkDeleteEntityAction : WFLinkEntityAction



+(id)overrideInputParameterNames;
-(BOOL)deletesInput;
-(Class)contentItemClass;
-(id)entityParameterName;
-(id)itemsBeingDeleted;
-(id)overrideDescriptionSummary;
-(id)overrideEntityName;
-(id)overrideLabelsByParameter;
-(id)verb;


@end


#endif