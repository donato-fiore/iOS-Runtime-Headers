// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIREMOTEIMAGEDESCRIPTOR_H
#define VUIREMOTEIMAGEDESCRIPTOR_H

@class NSString, UIColor, NSShadow;

#import <Foundation/Foundation.h>


@interface VUIRemoteImageDescriptor : NSObject

@property (copy, nonatomic) NSString *accessibilityText; // ivar: _accessibilityText
@property (nonatomic) BOOL animatesShadowChanges; // ivar: _animatesShadowChanges
@property (readonly, nonatomic) CGFloat aspectRatio; // ivar: _aspectRatio
@property (retain, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (retain, nonatomic) UIColor *borderColor; // ivar: _borderColor
@property (nonatomic) _VUICornerRadii borderRadii; // ivar: _borderRadii
@property (nonatomic) CGFloat borderWidth; // ivar: _borderWidth
@property (nonatomic) BOOL clearsExisting; // ivar: _clearsExisting
@property (readonly, nonatomic) CGSize containerSize; // ivar: _containerSize
@property (nonatomic) BOOL continuousBorder; // ivar: _continuousBorder
@property (copy, nonatomic) NSString *cropCode; // ivar: _cropCode
@property (nonatomic) NSUInteger decoratorType; // ivar: _decoratorType
@property (copy, nonatomic) NSString *extension; // ivar: _extension
@property (retain, nonatomic) UIColor *highlightColor; // ivar: _highlightColor
@property (nonatomic) BOOL loadsImmediately; // ivar: _loadsImmediately
@property (nonatomic) BOOL optimizedImageRendering; // ivar: _optimizedImageRendering
@property (copy, nonatomic) NSString *p3Specifier; // ivar: _p3Specifier
@property (retain, nonatomic) UIColor *placeholderColor; // ivar: _placeholderColor
@property (copy, nonatomic) NSString *placeholderSrc; // ivar: _placeholderSrc
@property (nonatomic) NSInteger scaleMode; // ivar: _scaleMode
@property (retain, nonatomic) NSShadow *shadow; // ivar: _shadow
@property (readonly, nonatomic) CGSize size; // ivar: _size
@property (readonly, nonatomic) NSString *src; // ivar: _src
@property (nonatomic, getter=isTemplated) BOOL templated; // ivar: _templated
@property (retain, nonatomic) UIColor *tintColor; // ivar: _tintColor


-(id)initWithSrc:(id)arg0 size:(struct CGSize )arg1 ;
-(id)initWithSrc:(id)arg0 size:(struct CGSize )arg1 containerSize:(struct CGSize )arg2 ;


@end


#endif