// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKMOUNTPARAMS_H
#define SKMOUNTPARAMS_H

@class NSSet, NSURL;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SKMountParams : NSObject <NSCopying>



@property (retain, nonatomic) NSSet *allParams; // ivar: _allParams
@property (nonatomic) BOOL force; // ivar: _force
@property (copy, nonatomic) NSURL *mountPoint; // ivar: _mountPoint
@property (nonatomic) BOOL noBrowse; // ivar: _noBrowse
@property (nonatomic) BOOL readOnly; // ivar: _readOnly
@property (nonatomic) BOOL recursive; // ivar: _recursive


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithParams:(id)arg0 ;


@end


#endif