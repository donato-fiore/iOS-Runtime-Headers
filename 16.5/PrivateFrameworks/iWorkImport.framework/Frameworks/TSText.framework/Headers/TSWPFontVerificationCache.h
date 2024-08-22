// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSWPFONTVERIFICATIONCACHE_H
#define TSWPFONTVERIFICATIONCACHE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface TSWPFontVerificationCache : NSObject {
    NSMutableDictionary *_verifiedFonts;
}




-(NSInteger)statusForFontName:(id)arg0 ;
-(id)filterFontNames:(id)arg0 withStatus:(NSInteger)arg1 ;
-(id)filterFontNames:(id)arg0 withStatusInSet:(id)arg1 ;
-(id)filterFontNames:(id)arg0 withoutStatus:(NSInteger)arg1 ;
-(id)fontNamesWithStatus:(NSInteger)arg0 ;
-(id)fontNamesWithStatusInSet:(id)arg0 ;
-(id)init;
-(void)reset;
-(void)resetFontNames:(id)arg0 withStatus:(NSInteger)arg1 ;
-(void)resetFontNames:(id)arg0 withStatusInSet:(id)arg1 ;
-(void)setStatus:(NSInteger)arg0 forFontName:(id)arg1 ;
-(void)setStatus:(NSInteger)arg0 forFontNames:(id)arg1 ;


@end


#endif