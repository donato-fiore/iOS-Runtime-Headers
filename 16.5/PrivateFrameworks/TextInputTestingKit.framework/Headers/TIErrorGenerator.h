// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TIERRORGENERATOR_H
#define TIERRORGENERATOR_H


#import <Foundation/Foundation.h>


@interface TIErrorGenerator : NSObject {
    *void m_generator;
    *void m_distribution;
    float _relErrorNumbersPunctuation;
    float _relErrorControlKeys;
    unsigned int _RNGSeedSalt;
}


@property (nonatomic) NSInteger spaceHorizontalErrorMode; // ivar: _spaceHorizontalErrorMode
@property (nonatomic) CGFloat spaceVerticalBias; // ivar: _spaceVerticalBias


+(id)errorGeneratorWithAttributes:(id)arg0 ;
-(CGFloat)uniformRandomNumber;
-(id)errorForKeyString:(id)arg0 rect:(struct CGRect )arg1 ;
-(id)init;
-(id)initWithAttributes:(id)arg0 ;
-(struct CGPoint )globalBias;
-(struct CGPoint )persistentBiasForKeyString:(id)arg0 rect:(struct CGRect )arg1 ;
-(struct CGPoint )persistentBiasForSpaceBarRect:(struct CGRect )arg0 ;
-(struct CGPoint )randomErrorForKeyString:(id)arg0 rect:(struct CGRect )arg1 ;
-(struct CGPoint )randomPointInDistribution;
-(struct CGPoint )uniformRandomPointInRect:(struct CGRect )arg0 ;
-(void)dealloc;
-(void)reset;
-(void)setRandomNumberSeed:(unsigned int)arg0 ;


@end


#endif