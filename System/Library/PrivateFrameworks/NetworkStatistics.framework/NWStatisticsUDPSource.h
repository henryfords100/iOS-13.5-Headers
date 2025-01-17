/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:01 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NetworkStatistics.framework/NetworkStatistics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkStatistics/NetworkStatistics-Structs.h>
#import <NetworkStatistics/NWStatisticsSource.h>

@interface NWStatisticsUDPSource : NWStatisticsSource {

	nstat_udp_descriptor _descriptor;
	unsigned long long _eventFlags;

}
-(id)description;
-(id)_currentSnapshot;
-(id)initWithManager:(id)arg1 local:(const sockaddr*)arg2 remote:(const sockaddr*)arg3 ;
-(int)handleDescriptor:(void*)arg1 length:(unsigned long long)arg2 events:(unsigned long long)arg3 ;
@end

