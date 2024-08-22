// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TYPISTTHAISYLLABLE_H
#define TYPISTTHAISYLLABLE_H


#import <Foundation/Foundation.h>


@interface TypistThaiSyllable : NSObject



+(BOOL)isThaiCharacter:(unsigned short)arg0 ;
+(id)smallCharacers;
+(id)tallCharacters;
+(id)upperCombiningCharacters;


@end


#endif