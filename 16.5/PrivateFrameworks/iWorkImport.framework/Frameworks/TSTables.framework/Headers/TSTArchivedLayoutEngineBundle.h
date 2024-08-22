// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSTARCHIVEDLAYOUTENGINEBUNDLE_H
#define TSTARCHIVEDLAYOUTENGINEBUNDLE_H


#import <Foundation/Foundation.h>

#import "TSTWidthHeightCache.h"

@interface TSTArchivedLayoutEngineBundle : NSObject

@property (retain, nonatomic) TSTWidthHeightCache *widthHeightCache; // ivar: _widthHeightCache


+(id)widthHeightCacheFromBundle:(id)arg0 withNumberOfRows:(unsigned int)arg1 andNumberOfColumns:(unsigned int)arg2 ;
-(id)initWithArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(id)initWithLayoutEngine:(id)arg0 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;


@end


#endif