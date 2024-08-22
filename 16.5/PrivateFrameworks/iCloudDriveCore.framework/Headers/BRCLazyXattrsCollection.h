// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRCLAZYXATTRSCOLLECTION_H
#define BRCLAZYXATTRSCOLLECTION_H

@class NSMutableData, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface BRCLazyXattrsCollection : NSObject {
    NSMutableData *_xattrNamesList;
    NSMutableData *_xattrNamesData;
    unsigned int _xattrCount;
    unsigned int _contentXattrCount;
    int _fd;
    NSInteger _sizeLimit;
    NSInteger _cacheSize;
    NSMutableDictionary *_cachedXattrs;
}




-(*char *)contentXattrNamesBegin;
-(*char *)contentXattrNamesEnd;
-(*char *)structuralXattrNamesBegin;
-(*char *)structuralXattrNamesEnd;
-(*char *)xattrNamesBegin;
-(*char *)xattrNamesEnd;
-(char *)xattrNamesListBegin;
-(char *)xattrNamesListEnd;
-(id)getXattrValue:(id)arg0 error:(*id)arg1 ;
-(id)initWithFD:(int)arg0 sizeLimit:(NSInteger)arg1 syncable:(BOOL)arg2 error:(*id)arg3 ;
-(unsigned int)contentXattrNamesCount;
-(unsigned int)structuralXattrNamesCount;
-(unsigned int)xattrNamesCount;
-(void)clearCache;


@end


#endif