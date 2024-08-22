// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRCTCBEAMSEARCH_H
#define CRCTCBEAMSEARCH_H

@class NSLocale;

#import <Foundation/Foundation.h>


@interface CRCtcBeamSearch : NSObject

@property (nonatomic) *_LXLexicon dynamicLexicon; // ivar: _dynamicLexicon
@property (readonly, nonatomic) NSLocale *locale; // ivar: _locale


-(id)initWithConfiguration:(id)arg0 error:(*id)arg1 ;
-(id)kBestPathsForInput:(id)arg0 k:(NSUInteger)arg1 beamWidth:(NSUInteger)arg2 outputProbs:(*id)arg3 outputWhitespaceRanges:(*id)arg4 error:(*id)arg5 ;
-(void)dealloc;


@end


#endif