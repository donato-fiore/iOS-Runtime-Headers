// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIMEDIACOMPONENT_H
#define SKUIMEDIACOMPONENT_H

@class NSString;
@protocol SSMetricsEventFieldProvider, SKUIArtworkProviding;


#import "SKUIPageComponent.h"
#import "SKUILink.h"

@interface SKUIMediaComponent : SKUIPageComponent <SSMetricsEventFieldProvider>



@property (readonly, nonatomic) NSString *accessibilityLabel; // ivar: _accessibilityLabel
@property (readonly, nonatomic) NSInteger alignment; // ivar: _alignment
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat duration; // ivar: _duration
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SKUILink *link; // ivar: _link
@property (readonly, nonatomic) NSInteger mediaAppearance; // ivar: _mediaAppearance
@property (readonly, nonatomic) NSInteger mediaIdentifier; // ivar: _mediaIdentifier
@property (readonly, nonatomic) NSInteger mediaType; // ivar: _mediaType
@property (readonly, nonatomic) NSString *mediaURLString; // ivar: _mediaURLString
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<SKUIArtworkProviding> *thumbnailArtworkProvider; // ivar: _thumbnailArtworkProvider
@property (readonly, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) float titleFontSize; // ivar: _titleFontSize
@property (readonly, nonatomic) NSInteger titleFontWeight; // ivar: _titleFontWeight


-(NSInteger)componentType;
-(id)bestThumbnailArtwork;
-(id)bestThumbnailForWidth:(CGFloat)arg0 ;
-(id)initWithArtwork:(id)arg0 ;
-(id)initWithArtworkProvider:(id)arg0 ;
-(id)initWithArtworkProvider:(id)arg0 appearance:(NSInteger)arg1 ;
-(id)initWithCustomPageContext:(id)arg0 ;
-(id)initWithFeaturedContentContext:(id)arg0 kind:(NSInteger)arg1 ;
-(id)metricsElementName;
-(id)valueForMetricsField:(id)arg0 ;


@end


#endif