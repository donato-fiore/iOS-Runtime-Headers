// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WEBCORESTATISTICS_H
#define WEBCORESTATISTICS_H


#import <Foundation/Foundation.h>


@interface WebCoreStatistics : NSObject



+(BOOL)shouldPrintExceptions;
+(NSUInteger)cachedFontDataCount;
+(NSUInteger)cachedFontDataInactiveCount;
+(NSUInteger)glyphPageCount;
+(NSUInteger)iconPageURLMappingCount;
+(NSUInteger)iconRecordCount;
+(NSUInteger)iconRetainedPageURLCount;
+(NSUInteger)iconsWithDataCount;
+(NSUInteger)javaScriptGlobalObjectsCount;
+(NSUInteger)javaScriptInterpretersCount;
+(NSUInteger)javaScriptNoGCAllowedObjectsCount;
+(NSUInteger)javaScriptObjectsCount;
+(NSUInteger)javaScriptProtectedGlobalObjectsCount;
+(NSUInteger)javaScriptProtectedObjectsCount;
+(NSUInteger)javaScriptReferencedObjectsCount;
+(id)javaScriptObjectTypeCounts;
+(id)javaScriptProtectedObjectTypeCounts;
+(id)javaScriptRootObjectClasses;
+(id)javaScriptRootObjectTypeCounts;
+(id)memoryStatistics;
+(id)statistics;
+(int)autoreleasedPageCount;
+(int)cachedFrameCount;
+(int)cachedPageCount;
+(void)emptyCache;
+(void)garbageCollectJavaScriptObjects;
+(void)garbageCollectJavaScriptObjectsOnAlternateThreadForDebugging:(BOOL)arg0 ;
+(void)purgeInactiveFontData;
+(void)returnFreeMemoryToSystem;
+(void)setCacheDisabled:(BOOL)arg0 ;
+(void)setJavaScriptGarbageCollectorTimerEnabled:(BOOL)arg0 ;
+(void)setShouldPrintExceptions:(BOOL)arg0 ;
+(void)startIgnoringWebCoreNodeLeaks;
+(void)stopIgnoringWebCoreNodeLeaks;


@end


#endif