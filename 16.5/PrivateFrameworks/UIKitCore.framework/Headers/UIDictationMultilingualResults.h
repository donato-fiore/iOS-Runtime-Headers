// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIDICTATIONMULTILINGUALRESULTS_H
#define UIDICTATIONMULTILINGUALRESULTS_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface UIDictationMultilingualResults : NSObject

@property (copy, nonatomic) NSString *dominantLanguage; // ivar: _dominantLanguage
@property (copy, nonatomic) NSArray *phrases; // ivar: _phrases


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPhrases:(id)arg0 dominantLanguage:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif