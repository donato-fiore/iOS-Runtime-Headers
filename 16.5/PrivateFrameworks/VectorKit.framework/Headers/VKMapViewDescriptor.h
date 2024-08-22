// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VKMAPVIEWDESCRIPTOR_H
#define VKMAPVIEWDESCRIPTOR_H

@class GEOApplicationAuditToken;

#import <Foundation/Foundation.h>


@interface VKMapViewDescriptor : NSObject {
    NSInteger _navViewMode;
}


@property (nonatomic) BOOL allowsAntialiasing; // ivar: _allowsAntialiasing
@property (retain, nonatomic) GEOApplicationAuditToken *auditToken; // ivar: _auditToken
@property (nonatomic) NSInteger carDisplayType; // ivar: _carDisplayType
@property (nonatomic) CGFloat contentScale; // ivar: _contentScale
@property (nonatomic) BOOL inBackground; // ivar: _inBackground
@property (nonatomic) unsigned char mapKitUsage; // ivar: _mapKitUsage
@property (nonatomic) NSInteger mapViewPurpose; // ivar: _mapViewPurpose
@property (nonatomic) unsigned char mapsUsage; // ivar: _mapsUsage
@property (nonatomic) BOOL shouldRasterize; // ivar: _shouldRasterize


+(id)descriptorWithShouldRasterize:(BOOL)arg0 inBackground:(BOOL)arg1 contentScale:(CGFloat)arg2 auditToken:(id)arg3 mapViewPurpose:(NSInteger)arg4 allowsAntialiasing:(BOOL)arg5 ;
-(id)init;


@end


#endif