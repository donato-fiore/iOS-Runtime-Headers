// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UICELLACCESSORYOUTLINEDISCLOSURE_H
#define UICELLACCESSORYOUTLINEDISCLOSURE_H



#import "UICellAccessory.h"
#import "UIImage.h"

@interface UICellAccessoryOutlineDisclosure : UICellAccessory

@property (retain, nonatomic, getter=_customImage, setter=_setCustomImage:) UIImage *_customImage; // ivar: __customImage
@property (copy, nonatomic) id *actionHandler; // ivar: _actionHandler
@property (readonly, nonatomic) CGFloat rotationAngle;
@property (nonatomic) NSInteger style; // ivar: _style


+(BOOL)supportsSecureCoding;
-(BOOL)_canDirectlyUpdateExistingAccessoryViewFrom:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)_systemType;
-(NSInteger)_systemTypePlacementForHeader:(BOOL)arg0 ;
-(id)_identifier;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif