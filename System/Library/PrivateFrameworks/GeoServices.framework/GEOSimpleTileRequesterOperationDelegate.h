/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:13 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEOSimpleTileRequesterOperationDelegate <NSObject>
@required
-(int)checksumMethodForIncomingTileDataWithKey:(const GEOTileKey*)arg1;
-(BOOL)shouldAllowEmptyDataForTileKey:(const GEOTileKey*)arg1;
-(void)operationFinished:(id)arg1;
-(void)operationFailed:(id)arg1 error:(id)arg2;
-(id)verifyDataIntegrity:(id)arg1 checksumMethod:(int)arg2;

@end
