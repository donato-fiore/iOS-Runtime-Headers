// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIBRICKITEM_H
#define SKUIBRICKITEM_H

@class NSString;

#import <Foundation/Foundation.h>

#import "SKUIArtwork.h"
#import "SKUICountdown.h"
#import "SKUIEditorialComponent.h"
#import "SKUILink.h"

@interface SKUIBrickItem : NSObject

@property (readonly, nonatomic) NSString *accessibilityLabel; // ivar: _accessibilityLabel
@property (readonly, nonatomic) SKUIArtwork *artwork; // ivar: _artwork
@property (readonly, nonatomic) NSInteger brickIdentifier; // ivar: _brickIdentifier
@property (readonly, nonatomic) SKUICountdown *countdown; // ivar: _countdown
@property (readonly, nonatomic) SKUIEditorialComponent *editorial; // ivar: _editorial
@property (readonly, nonatomic) SKUILink *link; // ivar: _link


-(id)description;
-(id)initWithBannerRoomContext:(id)arg0 ;
-(id)initWithComponentContext:(id)arg0 ;
-(id)initWithCustomPageContext:(id)arg0 ;


@end


#endif