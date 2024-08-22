// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSTIMEERRORANALYSIS_H
#define TSTIMEERRORANALYSIS_H


#import <Foundation/Foundation.h>


@interface TSTimeErrorAnalysis : NSObject

@property (readonly, nonatomic) NSInteger analysisLimit;
@property (readonly, nonatomic) CGFloat averagePeriod; // ivar: _averagePeriod
@property (readonly, nonatomic) BOOL calculated; // ivar: _calculated
@property (readonly, nonatomic) NSInteger calculatedStepSize; // ivar: _calculatedStepSize
@property (readonly, nonatomic) NSInteger highestWindowSize; // ivar: _highestWindowSize
@property (readonly, nonatomic) NSInteger lowestWindowSize; // ivar: _lowestWindowSize
@property (readonly, nonatomic) NSInteger numberOfErrors; // ivar: _numberOfErrors
@property (readonly, nonatomic) NSInteger threadingLimit;
@property (readonly, nonatomic) NSInteger threadingSegment;
@property (readonly, nonatomic) *CGFloat timeErrors; // ivar: _timeErrors
@property (readonly, nonatomic) *CGFloat timestamps; // ivar: _timestamps


+(id)additionalScriptInitialization;
+(id)additionalScriptPlots:(id)arg0 ;
+(id)additionalScriptRecords;
+(id)generatePythonScriptWithOutputPath:(id)arg0 fileName:(id)arg1 titleName:(id)arg2 plotPath:(id)arg3 showPlot:(BOOL)arg4 ;
+(id)keyPathsForValuesAffectingAnalysisLimit;
+(id)plotSize;
+(id)plotTitle;
+(id)plotYLabel;
+(id)plotYLimits:(id)arg0 ;
+(id)variableName;
-(BOOL)exportAnalysisToDirectoryURL:(id)arg0 ;
-(BOOL)exportAnalysisToDirectoryURL:(id)arg0 withFilename:(id)arg1 ;
-(BOOL)exportAnalysisToDirectoryURL:(id)arg0 withFilename:(id)arg1 fromStartWindowSize:(NSInteger)arg2 toEndWindowSize:(NSInteger)arg3 stepSize:(NSInteger)arg4 ;
-(BOOL)exportTimeErrorsToDirectoryURL:(id)arg0 ;
-(BOOL)exportTimeErrorsToDirectoryURL:(id)arg0 withFilename:(id)arg1 ;
-(id)initWithTimeErrorValues:(id)arg0 ;
-(void)_performAnalysisFromWindowSize:(NSInteger)arg0 toWindowSize:(NSInteger)arg1 stepSize:(NSInteger)arg2 ;
-(void)dealloc;
-(void)performAnalysis;
-(void)performAnalysisFromStartWindowSize:(NSInteger)arg0 toEndWindowSize:(NSInteger)arg1 stepSize:(NSInteger)arg2 ;
-(void)performAnalysisFromStartWindowSize:(NSInteger)arg0 toEndWindowSize:(NSInteger)arg1 stepSize:(NSInteger)arg2 withThreadingOption:(NSInteger)arg3 ;
-(void)performAnalysisWithThreadingOption:(NSInteger)arg0 ;


@end


#endif