// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNVCARDDATAANALYZER_H
#define CNVCARDDATAANALYZER_H


#import <Foundation/Foundation.h>


@interface CNVCardDataAnalyzer : NSObject



+(BOOL)data:(id)arg0 containsParam:(id)arg1 value:(id)arg2 encoding:(NSUInteger)arg3 ;
+(BOOL)data:(id)arg0 containsString:(id)arg1 encoding:(NSUInteger)arg2 ;
+(BOOL)data:(id)arg0 containsSubdata:(id)arg1 ;
+(BOOL)data:(id)arg0 hasPrefix:(id)arg1 ;
+(BOOL)data:(id)arg0 isVersion30WithPrefix:(id)arg1 encoding:(NSUInteger)arg2 ;
+(BOOL)tryUTF16BEBOMVCard:(id)arg0 analysis:(struct CNVCardDataAnalysis *)arg1 ;
+(BOOL)tryUTF16BEVCard:(id)arg0 analysis:(struct CNVCardDataAnalysis *)arg1 ;
+(BOOL)tryUTF16ByInferrence:(id)arg0 analysis:(struct CNVCardDataAnalysis *)arg1 ;
+(BOOL)tryUTF16LEBOMVCard:(id)arg0 analysis:(struct CNVCardDataAnalysis *)arg1 ;
+(BOOL)tryUTF16LEVCard:(id)arg0 analysis:(struct CNVCardDataAnalysis *)arg1 ;
+(BOOL)tryUTF16WithByteOrderMarker:(id)arg0 analysis:(struct CNVCardDataAnalysis *)arg1 ;
+(BOOL)tryUTF8VCard:(id)arg0 analysis:(struct CNVCardDataAnalysis *)arg1 ;
+(BOOL)tryVCardEncoding:(NSUInteger)arg0 data:(id)arg1 analysis:(struct CNVCardDataAnalysis *)arg2 ;
+(id)data:(id)arg0 byPrependingData:(id)arg1 ;
+(struct CNVCardDataAnalysis )analyzeData:(id)arg0 ;
+(unsigned char)data:(id)arg0 byteAtIndex:(NSUInteger)arg1 ;


@end


#endif