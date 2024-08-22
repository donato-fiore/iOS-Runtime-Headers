// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIUBER_H
#define SKUIUBER_H

@class NSString;
@protocol SKUIArtworkProviding;

#import <Foundation/Foundation.h>

#import "SKUIColorScheme.h"

@interface SKUIUber : NSObject

@property (readonly, nonatomic) NSObject<SKUIArtworkProviding> *artworkProvider; // ivar: _artworkProvider
@property (readonly, nonatomic) SKUIColorScheme *colorScheme; // ivar: _colorScheme
@property (readonly, nonatomic) NSString *text; // ivar: _text


-(id)initWithUberDictionary:(id)arg0 ;


@end


#endif