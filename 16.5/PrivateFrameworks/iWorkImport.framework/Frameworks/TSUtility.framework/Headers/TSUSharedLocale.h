// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSUSHAREDLOCALE_H
#define TSUSHAREDLOCALE_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface TSUSharedLocale : NSObject {
    *__CFLocale mCurrentLocale;
    NSArray *mObserverObjects;
}




+(id)_singletonAlloc;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)sharedLocale;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(struct __CFLocale *)currentLocale;
-(void)datePreferencesChanged:(id)arg0 ;
-(void)dealloc;


@end


#endif