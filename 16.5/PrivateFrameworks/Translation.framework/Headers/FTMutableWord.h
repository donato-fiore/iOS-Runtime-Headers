// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FTMUTABLEWORD_H
#define FTMUTABLEWORD_H

@class NSString, NSData;


#import "FTWord.h"

@interface FTMutableWord : FTWord

@property (nonatomic) int frequency;
@property (copy, nonatomic) NSString *orthography;
@property (copy, nonatomic) NSData *pronunciations;
@property (copy, nonatomic) NSString *tag;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)pronunciations:(id)arg0 ;


@end


#endif