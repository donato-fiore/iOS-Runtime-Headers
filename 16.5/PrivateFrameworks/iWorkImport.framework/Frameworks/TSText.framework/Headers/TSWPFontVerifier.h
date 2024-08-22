// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSWPFONTVERIFIER_H
#define TSWPFONTVERIFIER_H


#import <Foundation/Foundation.h>


@interface TSWPFontVerifier : NSObject



+(id)missingFontName;
+(id)sharedInstance;
-(BOOL)isCloudKitDownloadableFontName:(id)arg0 ;
-(BOOL)isCoreTextDownloadableFontName:(id)arg0 ;
-(BOOL)isDownloadableFontName:(id)arg0 ;
-(BOOL)isFontWithPostscriptNameInstalled:(id)arg0 ;


@end


#endif