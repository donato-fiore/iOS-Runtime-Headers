// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFCONTEXTUALACTIONICON_H
#define WFCONTEXTUALACTIONICON_H

@class NSString, NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "WFImage.h"
#import "WFColor.h"
#import "WFIcon.h"

@interface WFContextualActionIcon : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *applicationBundleIdentifier; // ivar: _applicationBundleIdentifier
@property (readonly, nonatomic) NSData *imageData; // ivar: _imageData
@property (readonly, copy, nonatomic) NSString *imageName; // ivar: _imageName
@property (readonly, nonatomic) CGFloat imageScale; // ivar: _imageScale
@property (readonly, nonatomic) WFImage *renderedImage; // ivar: _renderedImage
@property (readonly, nonatomic) WFColor *renderedSymbolBackgroundColor; // ivar: _renderedSymbolBackgroundColor
@property (readonly, copy, nonatomic) NSString *renderedSymbolSystemName; // ivar: _renderedSymbolSystemName
@property (readonly, nonatomic) NSString *systemName; // ivar: _systemName
@property (readonly, nonatomic) WFIcon *wfIcon;


+(BOOL)supportsSecureCoding;
+(id)iconWithApplicationBundleIdentifier:(id)arg0 ;
+(id)iconWithImageData:(id)arg0 scale:(CGFloat)arg1 ;
+(id)iconWithImageName:(id)arg0 ;
+(id)iconWithRenderedSymbolOfSystemName:(id)arg0 backgroundColor:(id)arg1 ;
+(id)iconWithSystemName:(id)arg0 ;
+(id)imageNamed:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithApplicationBundleIdentifier:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithImageData:(id)arg0 scale:(CGFloat)arg1 ;
-(id)initWithImageName:(id)arg0 ;
-(id)initWithRenderedSymbolOfSystemName:(id)arg0 backgroundColor:(id)arg1 ;
-(id)initWithSystemName:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif