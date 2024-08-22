// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _ICQBUTTONSPECIFICATION_H
#define _ICQBUTTONSPECIFICATION_H

@class NSDictionary, NSString;

#import <Foundation/Foundation.h>

#import "ICQLink.h"

@interface _ICQButtonSpecification : NSObject {
    NSDictionary *_serverDict;
    ICQLink *_buttonLink;
}


@property (readonly, nonatomic) NSString *buttonFormat; // ivar: _buttonFormat
@property (readonly, nonatomic) ICQLink *buttonLink;
@property (retain, nonatomic) NSDictionary *linkForBundleIdentifier; // ivar: _linkForBundleIdentifier
@property (readonly, nonatomic) NSString *linkFormat; // ivar: _linkFormat
@property (readonly, nonatomic) NSString *textFormat; // ivar: _textFormat


+(id)buttonSpecificationSampleForLevel:(NSInteger)arg0 ;
-(id)initWithServerDictionary:(id)arg0 ;
-(id)linkForBundleIdentifier:(id)arg0 ;


@end


#endif