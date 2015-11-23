#include "redis.h"

void bingCommand(redisClient *c){
	addReply(c, shared.bong);
}