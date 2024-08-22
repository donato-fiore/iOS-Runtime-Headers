// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AUTOCORRECTIONRESULT_H
#define AUTOCORRECTIONRESULT_H

@class NSDictionary, NSString, NSNumber, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AutocorrectionResult : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSDictionary *aggdStatistics; // ivar: _aggdStatistics
@property (retain, nonatomic) NSString *context; // ivar: _context
@property (retain, nonatomic) NSNumber *corpusId; // ivar: _corpusId
@property (retain, nonatomic) NSArray *corrected; // ivar: _corrected
@property (retain, nonatomic) NSDictionary *debugData; // ivar: _debugData
@property (retain, nonatomic) NSArray *documentStates; // ivar: _documentStates
@property (retain, nonatomic) NSArray *input; // ivar: _input
@property (retain, nonatomic) NSArray *inserted; // ivar: _inserted
@property (retain, nonatomic) NSArray *intended; // ivar: _intended
@property (retain, nonatomic) NSArray *intendedTransliteration; // ivar: _intendedTransliteration
@property (retain, nonatomic) NSNumber *numberOfTouches; // ivar: _numberOfTouches
@property (retain, nonatomic) NSDictionary *pathsForWords; // ivar: _pathsForWords
@property (retain, nonatomic) NSArray *predicted; // ivar: _predicted
@property (retain, nonatomic) NSNumber *rank; // ivar: _rank
@property (retain, nonatomic) NSString *seed; // ivar: _seed
@property (retain, nonatomic) NSDictionary *sourceMetadata; // ivar: _sourceMetadata
@property (retain, nonatomic) NSArray *tags; // ivar: _tags
@property (retain, nonatomic) NSArray *touchEvents; // ivar: _touchEvents
@property (retain, nonatomic) NSArray *touched; // ivar: _touched


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)extractDataFromTypingLog:(id)arg0 ;


@end


#endif