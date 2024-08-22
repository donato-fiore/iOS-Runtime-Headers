// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UICELLACCESSORYCUSTOMVIEW_H
#define UICELLACCESSORYCUSTOMVIEW_H



#import "UICellAccessory.h"
#import "UIView.h"

@interface UICellAccessoryCustomView : UICellAccessory

@property (readonly, nonatomic) UIView *customView; // ivar: _customView
@property (nonatomic) BOOL maintainsFixedSize; // ivar: _maintainsFixedSize
@property (readonly, nonatomic) NSInteger placement; // ivar: _placement
@property (copy, nonatomic) id *position; // ivar: _position


+(BOOL)supportsSecureCoding;
-(BOOL)_canDirectlyUpdateExistingAccessoryViewFrom:(id)arg0 ;
-(BOOL)_isSystemType;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)_defaultPlacementForHeader:(BOOL)arg0 ;
-(NSUInteger)hash;
-(id)_identifier;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCustomView:(id)arg0 placement:(NSInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif