// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBUFORMAUTOFILLWHITELIST_H
#define WBUFORMAUTOFILLWHITELIST_H

@class NSCache;

#import <Foundation/Foundation.h>


@interface WBUFormAutoFillWhiteList : NSObject {
    NSCache *_cache;
}




+(id)sharedAutoFillWhiteList;
-(BOOL)allowsURL:(id)arg0 ;
-(id)init;
-(void)_whiteListSettingsChanged:(id)arg0 ;
-(void)dealloc;


@end


#endif