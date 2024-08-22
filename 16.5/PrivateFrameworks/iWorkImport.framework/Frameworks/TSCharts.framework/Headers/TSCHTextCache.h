// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCHTEXTCACHE_H
#define TSCHTEXTCACHE_H

@class TSUCache;

#import <Foundation/Foundation.h>


@interface TSCHTextCache : NSObject {
    TSUCache *_TSWPTextCache;
    TSUCache *_TSWPColumnCache;
    TSUCache *_numberWidthCache;
    TSUCache *_equalDigitWidthFont;
}




-(id)columnForKey:(id)arg0 ;
-(id)equalDigitWidthForFontName:(id)arg0 ;
-(id)init;
-(id)numberStringSizeForKey:(id)arg0 ;
-(id)textForKey:(id)arg0 ;
-(void)clear;
-(void)setColumn:(id)arg0 forKey:(id)arg1 ;
-(void)setEqualDigitWidth:(id)arg0 forFontName:(id)arg1 ;
-(void)setNumberStringSize:(id)arg0 forKey:(id)arg1 ;
-(void)setText:(id)arg0 textDelegate:(id)arg1 forKey:(id)arg2 ;


@end


#endif