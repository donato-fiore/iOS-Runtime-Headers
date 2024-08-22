// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUSHADOW_H
#define SUSHADOW_H

@class UIColor;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface SUShadow : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) UIColor *color; // ivar: _color
@property (nonatomic) CGSize offset; // ivar: _offset
@property (nonatomic) CGFloat opacity; // ivar: _opacity
@property (nonatomic) CGFloat radius; // ivar: _radius


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)applyToLayer:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif