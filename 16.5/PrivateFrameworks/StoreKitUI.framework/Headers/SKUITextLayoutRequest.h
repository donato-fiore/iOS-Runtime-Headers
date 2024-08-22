// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUITEXTLAYOUTREQUEST_H
#define SKUITEXTLAYOUTREQUEST_H

@class NSAttributedString, NSString;
@protocol SKUILayoutRequest;

#import <Foundation/Foundation.h>


@interface SKUITextLayoutRequest : NSObject <SKUILayoutRequest>



@property (copy, nonatomic) NSAttributedString *attributedText; // ivar: _attributedText
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat fontSize; // ivar: _fontSize
@property (nonatomic) NSInteger fontWeight; // ivar: _fontWeight
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) Class layoutClass;
@property (nonatomic) NSInteger numberOfLines; // ivar: _numberOfLines
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *text; // ivar: _text
@property (nonatomic) unsigned char textAlignment; // ivar: _textAlignment
@property (nonatomic) CGFloat width; // ivar: _width


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif