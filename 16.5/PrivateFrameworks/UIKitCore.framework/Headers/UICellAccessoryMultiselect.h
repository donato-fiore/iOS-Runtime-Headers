// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UICELLACCESSORYMULTISELECT_H
#define UICELLACCESSORYMULTISELECT_H



#import "UICellAccessory.h"
#import "UIColor.h"

@interface UICellAccessoryMultiselect : UICellAccessory

@property (retain, nonatomic) UIColor *backgroundColor;


+(BOOL)supportsSecureCoding;
-(NSInteger)_systemType;
-(NSInteger)_systemTypePlacementForHeader:(BOOL)arg0 ;
-(id)_identifier;
-(id)init;


@end


#endif