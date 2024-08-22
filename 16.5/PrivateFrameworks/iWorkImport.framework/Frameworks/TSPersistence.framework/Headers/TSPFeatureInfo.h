// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSPFEATUREINFO_H
#define TSPFEATUREINFO_H

@class NSString;

#import <Foundation/Foundation.h>


@interface TSPFeatureInfo : NSObject

@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSUInteger readVersion; // ivar: _readVersion
@property (readonly, nonatomic) NSUInteger writeVersion; // ivar: _writeVersion


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)init;
-(id)initWithIdentifier:(id)arg0 readVersion:(NSUInteger)arg1 writeVersion:(NSUInteger)arg2 validatingValues:(BOOL)arg3 ;


@end


#endif