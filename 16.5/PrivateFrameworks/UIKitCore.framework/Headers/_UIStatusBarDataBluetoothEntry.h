// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UISTATUSBARDATABLUETOOTHENTRY_H
#define _UISTATUSBARDATABLUETOOTHENTRY_H

@class UIStatusBarDataEntry;


#import "_UIStatusBarDataBatteryEntry.h"

@interface _UIStatusBarDataBluetoothEntry : UIStatusBarDataEntry

@property (copy, nonatomic) _UIStatusBarDataBatteryEntry *batteryEntry; // ivar: _batteryEntry
@property (nonatomic) NSInteger state; // ivar: _state


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_ui_descriptionBuilder;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif