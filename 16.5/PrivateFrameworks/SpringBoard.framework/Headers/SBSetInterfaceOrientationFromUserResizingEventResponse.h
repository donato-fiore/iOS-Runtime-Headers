// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSETINTERFACEORIENTATIONFROMUSERRESIZINGEVENTRESPONSE_H
#define SBSETINTERFACEORIENTATIONFROMUSERRESIZINGEVENTRESPONSE_H



#import "SBSwitcherModifierEventResponse.h"
#import "SBDisplayItem.h"

@interface SBSetInterfaceOrientationFromUserResizingEventResponse : SBSwitcherModifierEventResponse

@property (readonly, nonatomic) NSInteger desiredOrientation; // ivar: _desiredOrientation
@property (readonly, nonatomic) SBDisplayItem *displayItem; // ivar: _displayItem


-(NSInteger)type;
-(id)initWithDisplayItem:(id)arg0 desiredContentOrientation:(NSInteger)arg1 ;


@end


#endif