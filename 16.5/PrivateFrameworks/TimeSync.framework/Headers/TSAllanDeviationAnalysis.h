// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSALLANDEVIATIONANALYSIS_H
#define TSALLANDEVIATIONANALYSIS_H

@class NSArray;


#import "TSTimeErrorAnalysis.h"

@interface TSAllanDeviationAnalysis : TSTimeErrorAnalysis {
    *CGFloat _adev;
}


@property (readonly, copy, nonatomic) NSArray *adev;


+(id)plotSize;
+(id)plotTitle;
+(id)plotYLabel;
+(id)variableName;
-(BOOL)exportAnalysisToDirectoryURL:(id)arg0 ;
-(BOOL)exportAnalysisToDirectoryURL:(id)arg0 withFilename:(id)arg1 fromStartWindowSize:(NSInteger)arg2 toEndWindowSize:(NSInteger)arg3 stepSize:(NSInteger)arg4 ;
-(BOOL)exportTimeErrorsToDirectoryURL:(id)arg0 ;
-(NSInteger)analysisLimit;
-(id)adevFromStartWindowSize:(NSInteger)arg0 toEndWindowSize:(NSInteger)arg1 stepSize:(NSInteger)arg2 ;
-(id)initWithTimeErrorValues:(id)arg0 ;
-(void)_performAnalysisFromWindowSize:(NSInteger)arg0 toWindowSize:(NSInteger)arg1 stepSize:(NSInteger)arg2 ;
-(void)dealloc;


@end


#endif