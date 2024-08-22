// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TEXTROW_H
#define TEXTROW_H

@class NSArray, NSMutableArray, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TextRow : NSObject <NSCopying>



@property CGFloat cachedScore; // ivar: _cachedScore
@property (readonly) NSArray *features;
@property (retain, nonatomic) NSMutableArray *mutableTokens; // ivar: _mutableTokens
@property (readonly) CGFloat score;
@property (readonly) NSString *string;
@property (readonly) NSUInteger tokenCount;
@property (readonly, retain, nonatomic) NSArray *tokens;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)addToken:(id)arg0 ;


@end


#endif