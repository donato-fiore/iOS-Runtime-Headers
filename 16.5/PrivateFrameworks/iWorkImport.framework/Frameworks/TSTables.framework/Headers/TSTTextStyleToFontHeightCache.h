// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSTTEXTSTYLETOFONTHEIGHTCACHE_H
#define TSTTEXTSTYLETOFONTHEIGHTCACHE_H

@class NSMutableArray, TSUPointerKeyDictionary;

#import <Foundation/Foundation.h>


@interface TSTTextStyleToFontHeightCache : NSObject {
    _opaque_pthread_rwlock_t _rwLock;
}


@property (retain, nonatomic) NSMutableArray *textStyleReferences; // ivar: _textStyleReferences
@property (retain, nonatomic) TSUPointerKeyDictionary *textStyleToFontHeight; // ivar: _textStyleToFontHeight


-(CGFloat)heightForTextStyle:(id)arg0 ;
-(id)init;
-(void)dealloc;
-(void)removeAllObjects;
-(void)setHeight:(CGFloat)arg0 forTextStyle:(id)arg1 ;


@end


#endif