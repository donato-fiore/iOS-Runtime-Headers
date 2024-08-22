// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRCPROGRESSMULTIPLEX_H
#define BRCPROGRESSMULTIPLEX_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface BRCProgressMultiplex : NSObject {
    NSArray *_underlineProgressObjects;
}


@property (nonatomic) NSInteger completedUnitCount; // ivar: _completedUnitCount
@property (copy, nonatomic) NSString *localizedAdditionalDescription; // ivar: _localizedAdditionalDescription
@property (copy, nonatomic) NSString *localizedDescription; // ivar: _localizedDescription
@property (nonatomic) NSInteger totalUnitCount; // ivar: _totalUnitCount


-(BOOL)indeterminate;
-(BOOL)isPublished;
-(id)brc_dumpDescription;
-(id)initWithUnderlineProgressObjects:(id)arg0 ;
-(void)brc_publish;
-(void)brc_unpublish;
-(void)setUserInfoObject:(id)arg0 forKey:(id)arg1 ;


@end


#endif