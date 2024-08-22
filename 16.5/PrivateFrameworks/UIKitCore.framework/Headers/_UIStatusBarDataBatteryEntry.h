// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UISTATUSBARDATABATTERYENTRY_H
#define _UISTATUSBARDATABATTERYENTRY_H

@class UIStatusBarDataEntry, NSString;



@interface _UIStatusBarDataBatteryEntry : UIStatusBarDataEntry

@property (nonatomic) NSInteger capacity; // ivar: _capacity
@property (copy, nonatomic) NSString *detailString; // ivar: _detailString
@property (nonatomic) BOOL prominentlyShowsDetailString; // ivar: _prominentlyShowsDetailString
@property (nonatomic) BOOL saverModeActive; // ivar: _saverModeActive
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